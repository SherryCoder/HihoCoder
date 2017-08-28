//#include<iostream>
//using namespace std;
//
//
//int main()
//{
//    int T,h,m,s,t;
//    scanf("%d",&T);
//    while(T--)
//    {
//        scanf("%d%d%d",&h,&m,&s);
//        scanf("%d",&t);
//        s = (s+t);//%60;
//        m = (m+s/60);//%60;
//        h = (h+m/60);//%12;
//        s %= 60;     //多少秒
//        m %= 60;     //多少分
//        h %= 12;	//多少小时
//        double mm = m/60.0*360+s/60.0*6;
//        double hh = h/12.0*360+m/60.0*30+s/60.0*0.5;
//        double ans = fabs(mm-hh);
//        if(ans > 180)
//            ans = 360 - ans;
//        printf("%.4f\n",ans);
//    }
//}