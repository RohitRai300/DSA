/*
 * LC-3121: Count the Number of Special Characters II

You are given a string word. A letter c is called special if it appears both in lowercase and uppercase in word, and every lowercase occurrence of c appears before the first uppercase occurrence of c.

Return the number of special letters in word.

 
Example 1:

Input: word = "aaAbcBC"

Output: 3

Explanation:

The special characters are 'a', 'b', and 'c'.

Example 2:

Input: word = "abc"

Output: 0

Explanation:

There are no special characters in word.

Example 3:

Input: word = "AbBCab"

Output: 0

Explanation:

There are no special characters in word.
 */

import java.util.*;
public class countNoOfSpecialCharacters2 {
    public int numberOfSpecialChars(String word) {
        int count=0;
        int arrSmall[] = new int[26];
        int arrCaps[] = new int[26];
        HashMap<Character, Integer> mp = new HashMap<>();

        for(int i=0;i<word.length();i++){
            char letter = word.charAt(i);
            if(letter >= 'a' && letter <='z'){
                arrSmall[letter - 'a']++;
                mp.put(letter, i);
            }
            else{
                arrCaps[letter - 'A']++;
                mp.putIfAbsent(letter, i);
            }
        }

        // final validation
        for(int i=0;i<26;i++){
            char lowerCase = (char)(i+'a');
            char upperCase = (char)(i+'A');
            if(arrSmall[i]!=0 && arrCaps[i]!=0 
                && mp.get(lowerCase) < mp.get(upperCase))
                count++;
        }
        return count++;
    }
}
