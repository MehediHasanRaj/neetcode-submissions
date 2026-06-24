class Solution {
    public int[] twoSum(int[] numbers, int target) {
        /*if sorted
        1.  we can use two the loop o(n2), n1 + n2 == target
        2. we can use the map, check map[target-nums[cur]], o(n), space 0(n)
        3. using 2 pointer as sorted, o(n), space o(1)
        */

        int p1 = 0, p2 = numbers.length-1;
        while(p1 < p2){
            if(numbers[p1]== target - numbers[p2]) {
                return new int [] {p1+1, p2+1};
            }
            else if(numbers[p1]< target - numbers[p2]) p1++;
            else p2--;
        }

        return new int [0];

    }
}
