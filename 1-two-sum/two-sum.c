/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0;
    int j;
    int *result = malloc(sizeof(int) * 2);
    while(i < numsSize)
    {
        j = i + 1;
        while(j < numsSize)
        {
            if(nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return (result);
            }
            j++;
        }
        i++;
    }
    *returnSize = 0;
    return (NULL);
}