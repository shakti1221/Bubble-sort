# Bubble-sort

This repository is created to implement Bubble Sort Algorithm in various Programming Languages.

## About Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.<br>
Example: <br>
First Pass: <br>
( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two elements, and swaps since 5 > 1. <br>
( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4 <br>
( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2 <br>
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order (8 > 5), algorithm does not swap them.<br>
Second Pass: <br>
( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ) <br>
( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2 <br>
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) <br>
( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 ) <br>
Now, the array is already sorted, but our algorithm does not know if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.<br>
<br>
Third Pass: <br>
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) <br>
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 ) <br>
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )<br> 
( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )<br>
