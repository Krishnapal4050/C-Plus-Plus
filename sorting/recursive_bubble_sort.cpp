/**
 * @file 
 * @brief  Implementation of [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) recursive algorithm.
 * @details 
 * Bubble sort, sometimes referred to as sinking sort, is a simple sorting algorithm that repeatedly steps through the list, 
 * compares  adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is   *sorted. The algorithm, which is a comparison sort, 
 * is named for the way smaller or larger elements "bubble" to the top of the list
 * 
 * ### Bipartite graph
 * A bipartite graph (or bigraph) is a graph whose vertices can be divided into two disjoint 
 * and independent sets U and V such that every edge connects a vertex in U to one in V. 
 * Vertex sets U and V are usually called the parts of the graph. 
 * Equivalently, a bipartite graph is a graph that does not contain any odd-length cycles.
 * 
 * ### Matching and Not-Matching edges
 * Given a matching M, edges that are part of matching are called Matching edges and edges that are not part 
 * of M (or connect free nodes) are called Not-Matching edges.
 * 
 * ### Maximum cardinality matching
 * Given a bipartite graphs G = ( V = ( X , Y ) , E ) whose partition has the parts X and Y, 
 * with E denoting the edges of the graph, the goal is to find a matching with as many edges as possible. 
 * Equivalently, a matching that covers as many vertices as possible.
 * 
 * ### Augmenting paths
 * Given a matching M, an augmenting path is an alternating path that starts from and ends on free vertices. 
 * All single edge paths that start and end with free vertices are augmenting paths.
 * 
 * 
 * ### Concept
 * A matching M is not maximum if there exists an augmenting path. It is also true other way,
 * i.e, a matching is maximum if no augmenting path exists.
 * 
 * 
 * ### Algorithm
 * 1) Initialize the Maximal Matching M as empty.
 * 2) While there exists an Augmenting Path P
 *   Remove matching edges of P from M and add not-matching edges of P to M
 *   (This increases size of M by 1 as P starts and ends with a free vertex
 *   i.e. a node that is not part of matching.)
 * 3) Return M. 
 * 
 * 
 *
 * @author [Krishna Pal Deora](https://github.com/Krishnapal4050)
 * 
 */


#include<iostream>
using namespace std;
void recBubble(int arr[], int n){
   if (n == 1)
      return;
   for (int i=0; i<n-1; i++) //for each pass p
      if (arr[i] > arr[i+1]) //if the current element is greater than next one
   swap(arr[i], arr[i+1]); //swap elements
   recBubble(arr, n-1);
}


int main() 
{
   int data[] = {54, 74, 98, 154, 98, 32, 20, 13, 35, 40};
   int n = sizeof(data)/sizeof(data[0]);
   cout << "Sorted Sequence ";
   recBubble(data, n);
   for(int i = 0; i <n;i++)
      cout << data[i] << " ";
   
   
   return 0;
}
