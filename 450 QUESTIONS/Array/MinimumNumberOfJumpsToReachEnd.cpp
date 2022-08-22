// Given an array of integers where each element represents the max number of steps that can be made forward from that element.Write a function to return the minimum number of jumps to reach the end of the array(starting from the first element).If an element is 0, they cannot move through that element.If the end isn’t reachable, return -1.

// Method 1: Naive Recursive Approach.
// Approach: A naive approach is to start from the first element and recursively call for all the elements reachable from first element. The minimum number of jumps to reach end from first can be calculated using minimum number of jumps needed to reach end from the elements reachable from first.

// minJumps(start, end) = Min ( minJumps(k, end) ) for all k reachable from start