#include <stdio.h>
#include <math.h>

 double x0,q0,x1,q1,r0,r1,r2,midxqx,midxqy,midqrx,midqry,r,minx,maxx,minq,maxq,a,b,c;
 double sxq,sqr;
 double slopeqr,slopexq;
 double cx,cy;

 double roundup(float num)
 {
   if((long)(num)==num)return num;
   else if(num>0)return(long)(num+1);else return(long)(num);
 }

 double rounddown(float num)
 {
    
   if((long)(num)==num)return num;
   else if(num<0)return(long)(num-1);else return(long)(num);
 }

 void equation(double slopexq,double slopeqr, double midxqx, double midxqy,double midqrx,double midqry){
    cx = ((-midxqy-(-midqry))+(-(-midxqx*slopexq-(-midqrx*slopeqr))))/(double)(slopexq-slopeqr);
    cy =  (slopexq*cx+(-midxqx*slopexq))-(-midxqy);
    r = sqrt(((x0-cx)*(x0-cx))+((q0-cy)*(q0-cy)));
   //printf("%lf x %lf y %lf r",cx,cy,r);
   
 }


 int main()
 {
        scanf("%lf%lf%lf%lf%lf%lf",&x0,&q0,&x1,&q1,&r1,&r2);
       
        minx=x0;
        if(minx>x1){
            minx=x1;
        }
        maxx=x0;
        if(maxx<x1){
            maxx=x1;
        }
        minq=q0;
        if(minq>q1){
            minq=q1;
        }
        maxq=q0;
        if(maxq<q1){
            maxq=q1;
        }
        midxqx=(x0+x1)/2;
        midxqy=(q0+q1)/2;
        midqrx=(x1+r1)/2;
        midqry=(q1+r2)/2;
        sxq=(q1-q0)/(x1-x0);
        sqr=(r2-q1)/(r1-x1);

        //printf("%lf  sxq  %lf  sqr  ",sxq,sqr);

        slopexq= (double)-1.0/sxq;
        slopeqr= (double)-1.0/sqr;

        a=q1-q0;
        b=x0-x1;
        c=x1*q0-x0*q1;
        //printf("%lf %lf",slopexq,slopeqr);
       
        equation(slopexq,slopeqr,midxqx,midxqy,midqrx,midqry);
      
        if((a*r1+b*r2+c)*(a*(cx-r)+b*cy+c)>=0)minx=cx-r;
        if((a*r1+b*r2+c)*(a*(cx+r)+b*cy+c)>=0)maxx=cx+r;
        if((a*r1+b*r2+c)*(a*cx+b*(cy-r)+c)>=0)minq=cy-r;
        if((a*r1+b*r2+c)*(a*cx+b*(cy+r)+c)>=0)maxq=cy+r;

        //printf("%lf %lf ",maxq,minq);
        //printf("%lf ",maxx);
        minx=rounddown(minx);
        maxx=roundup(maxx);
        minq=rounddown(minq);
        maxq=roundup(maxq);

        //printf("%lf %lf %lf %lf \n",minx,maxx,minq,maxq);

        if(minx<-1000)minx=-1000;if(minq<-1000)minq=-1000;
        if(maxx>1000)maxx=1000;if(maxq>1000)maxq=1000;

   
        printf("%0.0lf ",fabs((maxx-minx)*(maxq-minq)));
        return 0;
 }
