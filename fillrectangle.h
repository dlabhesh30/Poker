class fill_rectangle
{
      public:
void fill_rect(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int color)
{
int n,i,j,k,dy,dx;
int x,y,temp;
int a[4][2],xi[20];
float slope[20];

n=4;
a[0][0]=x1;
a[0][1]=y1;
a[1][0]=x2;
a[1][1]=y2;
a[2][0]=x3;
a[2][1]=y3;
a[3][0]=x4;
a[3][1]=y4;
a[n][0]=a[0][0];
a[n][1]=a[0][1];

//- draw polygon -

for(i=0;i<n;i++)
{
line(a[i][0],a[i][1],a[i+1][0],a[i+1][1]);
}

for(i=0;i<n;i++)
{
dy=a[i+1][1]-a[i][1];
dx=a[i+1][0]-a[i][0];

if(dy==0) 
slope[i]=1.0;
if(dx==0)
slope[i]=0.0;

if((dy!=0)&&(dx!=0)) /*- calculate inverse slope -*/
{
slope[i]=(float) dx/dy;
}
}

for(y=0;y< 768;y++)
{
k=0;
for(i=0;i<n;i++)
{

if( ((a[i][1]<=y)&&(a[i+1][1]>y))||
((a[i][1]>y)&&(a[i+1][1]<=y)))
{
xi[k]=(int)(a[i][0]+slope[i]*(y-a[i][1]));
k++;
}
}

for(j=0;j<k-1;j++) /*- Arrange x-intersections in order -*/
for(i=0;i<k-1;i++)
{
if(xi[i]>xi[i+1])
{
temp=xi[i];
xi[i]=xi[i+1];
xi[i+1]=temp;
}
}

setcolor(color);
for(i=0;i<k;i+=2)
{
line(xi[i],y,xi[i+1]+1,y);
}

}
}
};
