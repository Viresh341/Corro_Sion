#include <stdio.h>
#include <string.h>

int main()
{
    char e1[40];
    char e2[40];
    int i=0,j=0,k=0;
    int p1=-1,p2=-1;
    printf("\n---*---*---*   Hello friends, Welcome you all to 'Corro_Sion' Software    *---*---*---\n");
    
    char elements[][40] = {
        "Magnesium",
        "Zinc",
        "Beryllium",
        "Aluminium alloys",
        "Cadmium",
        "Mild steel & cast iron",
        "Low alloy steel",
        "Austenitic cast iron",
        "Aluminium bronze",
        "Naval brass, yellow brass & red brass",
        "Tin",
        "Copper",
        "50/50 lead tin solder",
        "Manganese bronze",
        "Silicon bronze",
        "Stainless steel",
        "Nickel silver",
        "90/10 copper nickel",
        "80/20 copper nickel",
        "Lead",
        "70/30 copper nickel",
        "Nickel aluminium bronze",
        "Nickel chromium alloy 600",
        "Nickel 200",
        "Silver",
        "Nickel copper",
        "Nickel iron chromium alloy",
        "Titanium",
        "Gold,platinum",
        "Graphite",

    };
    for(k=0;k<30;k++)
    {
        printf("%s\n",elements[k]);
    }
    printf("\nEnter the 1st element: ");
    gets(e1);
    
    printf("Enter the 2nd element: ");
    gets(e2);
    
    for (i=0;i<30;i++)
    {
        if (strcmp(elements[i], e1) == 0)
        {
            printf("Position: %d\n", i);
            break; 
        }
        p1=i;
    }
    for (j=0;j<30;j++)
    {
        if (strcmp(elements[j], e2) == 0)
        {
            printf("Position: %d\n", j);
            break; 
        }
        p2=j;
    }
    if(p1>p2)
    {
        printf("You can use %s, Because it undergoes less corrosion compare to %s.",elements[i],elements[j]);
    }
    else
    {
        printf("You can use %s, Because it undergoes less corrosion compare to %s.",elements[j],elements[i]);
    }
    return 0;
}