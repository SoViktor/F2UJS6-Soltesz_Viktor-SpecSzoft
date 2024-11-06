// this is just a code snippet saved from the internet
// for LaTeX code input testing

binarySearch(arr, x, low, high)
	repeat till low = high
		mid = (low + high)/2
			if (x == arr[mid])
				return mid

			else if (x > arr[mid])	// x is on the right side
				low = mid + 1

			else			// x is on the left side
				high = mid - 1

recursiveBinarySearch(arr, x, low, high)
	if low > high
		return False

	else
		mid = (low + high) / 2
		if x == arr[mid]
			return mid

		else if x > arr[mid]	// x is on the right side
			return binarySearch(arr, x, mid + 1, high)

		else			// x is on the left side
			return binarySearch(arr, x, low, mid - 1)

// ok bye