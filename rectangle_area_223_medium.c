int max(int a , int b){
    if(a>b)
    return a;
    else
    return b;
}
int min(int a , int b){
    if(a<b)
    return a;
    else
    return b;
}
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2){
            int net_area, gross_area,c,d;
            net_area = ((ax2-ax1)*(ay2-ay1))+((bx2-bx1)*(by2-by1));
            c = max(ax1,bx1)< min(ax2,bx2)?(min(ax2,bx2)-max(ax1,bx1)):0;
            d = max(ay1,by1)< min(ay2,by2)?(min(ay2,by2)-max(ay1,by1)):0;
            gross_area = net_area -(c*d);
        return gross_area;
}
