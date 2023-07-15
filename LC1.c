int* sum(int* nums, int numssize, int target, int* returnsize) {
    for (int i = 0; i < numssize; ++i) {
        for (int j = i + 1; j < numssize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = (int*)malloc(sizeof(int) * 2);
                ret[0] = nums[i];
                ret[1] = nums[j];
                *returnsize = 2;
                return ret;
            }
        }
    }
    free(returnsize);
    return NULL;
}