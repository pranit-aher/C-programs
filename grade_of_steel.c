#include<stdio.h>  
int main()  
{  
    int hr, ts;  
    float crb;  
  
    printf("Enter the hardness, Tensile Strength and Carbon Respectivly\n");  
    scanf("%d %d %f", &hr, &ts, &crb);  
  
    if(hr > 50 && crb < 0.7 && ts > 5600)  
    {  
        printf("Steel Grade is 10\n");  
    }  
    else if(hr > 50 && crb < 0.7)  
    {  
        printf("Steel Grade is 9\n");  
    }  
    else if(crb < 0.7 && ts > 5600)  
    {  
        printf("Steel Grade is 8\n");  
    }  
    else if(hr > 50 && ts > 5600)  
    {  
        printf("Steel Grade is 7\n");  
    }  
    else if(hr > 50 || crb < 0.7 || ts > 5600)  
    {  
        printf("Steel Grade is 6\n");  
    }  
    else if(hr < 50 && crb > 0.7 && ts < 5600)  
    {  
        printf("Steel Grade is 5\n");  
    }  
  
    return 0;  
}  
