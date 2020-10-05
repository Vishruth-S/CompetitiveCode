/*
Input : Array of Strings. (Ex :  ["eat","tea","tan","ate","nat","bat"])
Return : A list of list containing anagrams. (Ex: [["bat"],["nat","tan"],["ate","eat","tea"]])


Logic : An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase
        A Hashmap is used to keep track of different anagrams index in the list of list.
        A List of List is used to add anagrams to the particular list.
        A sorted string is used has Hash key and its particular index in the list is stored as the key.
        Each string is stored and checked in the hashmap to obtain the index(hash key).
        If it does not exist a new list is added and the index is added as the key.
        The string is then added to the list of a particular index.
        
        Runtime - O(m * n * log(n))
        n * log(n) to sort each string
        m is the number of string
*/

import java.util.*;
class Solution {
    public List<List<String>> groupAnagrams(String[] strs){
        List<List<String>> list = new ArrayList<List<String>>();
        HashMap<String,Integer> set = new HashMap<>();
        int j = 0;
        for(int i=0;i<strs.length;++i){
            char c[]= strs[i].toCharArray();
            Arrays.sort(c);
            String s = new String(c);
            if(set.containsKey(s)){
                list.get(set.get(s)).add(strs[i]);
            }
            else{
                list.add(new ArrayList<String>());
                set.put(s,j++);
                list.get(set.get(s)).add(strs[i]);
            }
        }
        return list;
    }
}
