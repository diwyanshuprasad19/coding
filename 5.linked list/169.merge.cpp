1st approach:
	brute force:put all linked list in new list and merge sort them.
	time complexity:o(nlogn)
	2nd optimal:
		O(nk):as element visited once and loop runs k times.
		what haapens here is that(1,2,3)(4,5,6)(7,8,9)
		run k times loop:
			for first 2 linked list use merge on them 
			then it will return a sorted linked list
			now do sorted with(7,8,9)
			see
			use merge function;
	3rd is most efficient:
		nlogk is time complexity.
