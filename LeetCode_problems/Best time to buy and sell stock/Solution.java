class Solution {
    /*An algorithm needs to be designed to maximise profit,for profit,the stock 
    should be bought at a lower price and sold at a higher price.This problem             
    should be visulaised as a peak and valley problem.For every valley(day on which       
    we buy stock),we should sell the stock at the next peak to maximise peak.If we       
    decide to skip over a peak thinking that we will earn more profit,that's wrong        
    as we will end up losing the profit over one of the transactions leading to an       
    overall lesser profit.*/
    public int maxProfit(int[] prices) {
        int i=0;
        int profit=0;
       while(i<prices.length-1)
       {
           while(i<prices.length-1 && prices[i]>=prices[i+1])
           {
               //we keep incrementing till we find a valley
               i++;
           }
           /*the while loop only stops if either i==prices.length or                            
           prices[i+1]>prices[i],which basically means that next element is                      
           greater,thus current element is a valley and next element is peak.*/
           int buy=prices[i];
          
           if(i!=prices.length-1)
           { //this is too check that we are not on the last element,buying a stock                 
              //on last day does not make sense as you cannot sell the stock.
               i++;
           }
           int sell=prices[i];
          
           profit=profit+sell-buy;
           
       }
        return profit;
        //the  time complexity of this solution is O(n)
        
    }
}