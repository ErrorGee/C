//LIINEAR SEARCH ALGO
#include<stdio.h>
//defining a function for linear searching.....................
int LinearSearch(int arr[], int num, int len){
    int i;
    for (i=0; i<len;i++){
        if (arr[i]==num){
            return i;
        }
}return -1;
}

int main(){
    int arr[]={5,4,9,3,2,7,8,22,67};
    int num=90;
    int len=sizeof(arr)/sizeof(arr[0]);
    int position=LinearSearch(arr, num, len);
    (position>=0)?printf("%d is present at position %d", num, position+1 ):printf("element not found");
    return 0;
}

//linear searching end.

..............................................................................................................................................................
  
//BINARY SEARCH ALGO --> a recursive approach
#include<stdio.h>
int BinarySearch(int arr[], int first, int last, int num){
    if (first<=last){
        int mid=(last+first)/2;
         //   //mid=first+(last-low)/2
         
        if (arr[mid]==num){
            
            return mid;
        }
        if (arr[mid]>num){
            return BinarySearch(arr, first, mid-1, num);
        }
        
        return BinarySearch(arr, mid+1, last, num);
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,7,90,120,670,800};
    int num=4;
    int First=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    int ans=BinarySearch(arr, First, length-1, num);
    
    (ans!=-1)?printf("\n%d element is present at position %d", num , ans+1):printf("\nelement not found");
    
    return 0;
}
// Binary Searching END
...................................................................................................................................................................
