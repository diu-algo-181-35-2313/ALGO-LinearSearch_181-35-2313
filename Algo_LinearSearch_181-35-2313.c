#include<stdio.h>

void main()
{
    int arr[100] = {11,78,80,99,50,33,76,47,17,90,94,47,20,15,67,10,49,3,45,21,64,93,55,23,45,97,64,98,76,12,36,36,95,11,48,37,37,52,9,51,99,11,76,21,74,31,83,52,91,36,65,65,33,8,52,92,92,88,18,47,2,30,45,83,55,11,76,36,86,84,9,57,26,58,62,27,67,69,40,18,53,42,4,32,65,92,8,14,12,4,78,6,73,63,78,23,47,39,66,39};
    int i,j,temp,t=0;

    //bubble sort//

    for(i=0;i<100;i++){
        for(j=0;j<100-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // search 7//
    for(i=0,temp=0;i<100;i++){
        if(arr[i]==7){
            temp++;
            t=i;//index number//

            break;
        }
    }
    if(temp==1) printf("%d is Found!! And Position is = %d\n",7,t+1);
    else printf("%d is Not Found!!\n",22);



    // search 22//
    for(i=0,temp=0;i<100;i++){
        if(arr[i]==22){
            temp++;
            t=i;//index number//
            break;
        }
    }
    if(temp==1) printf("%d is Found!! And Position is = %d\n",22,t+1);
    else printf("%d is Not Found!!\n",22);


    // search 99//
    for(i=0,temp=0;i<100;i++){
        if(arr[i]==99){
            temp++;
            t=i;//index number//
            break;
        }
    }
    if(temp==1) printf("%d is Found!! And Position is = %d\n",99,t+1);
    else printf("%d is Not Found!!\n",99);


}
