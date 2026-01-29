int*twoSum(int*nums,int numssize,int target,int*returnsize){
    int *result=(int*)malloc(2*sizeof(int));
    *returnsize=2;
    for(int i=0;i<numssize-1;i++){
        for(int j=i+1;j<numssize;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return NULL;
}
  

