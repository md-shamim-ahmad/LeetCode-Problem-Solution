using System;
using System.Collections.Generic;

namespace Two_Sum
{
    public class Two_Sum
    {

        int[] arr = { 9, 2, 24, 6, 4, 1, 8 };
        int sum = 10;
        findTwoSum(arr, sum);
        Console.ReadLine();

        // Finds the first Pair of numbers that sum upto the sum provided
        static void findTwoSum(int[] arr, int sum)
        {
            if (arr == null || arr.Length == 0)
                throw new ArgumentException("Invalid array provided");

            HashSet<int> set = new HashSet<int>();

            foreach (int item in arr)
            {
                int compliment = sum - item;
                if (set.Contains(compliment))
                {
                    Console.WriteLine($"Found the numbers - {compliment}, {item}");
                    break;
                }
                else
                {
                    set.Add(item);
                }
            }
        }        
    }
}
