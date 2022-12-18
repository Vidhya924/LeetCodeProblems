void swap(int *p1,int *p2){
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
void reverse(int *a,int s,int e){
     while(s<e)
         swap(&a[s++],&a[e--]);
}
void rotate(int* nums, int numsSize, int k){
   k=k%numsSize;
    reverse(nums,0,numsSize-k-1);
    reverse(nums,numsSize-k,numsSize-1);
    reverse(nums,0,numsSize-1);
}