/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int *result = malloc(sizeof(int) * numsSize);
    returnSize = numsSize;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        result[i] = sum;
    }
    return result;
}