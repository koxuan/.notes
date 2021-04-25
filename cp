rotate

brings whatever in the middle of the element to the front

rotate(start, element, end of element you want to bring forward)

for eg

	int  p = find(v.begin(), v.end(), 2) - v.begin();
	rotate(v.begin(), v.begin()+p,v.begin()+p+1);

	finds element and moves to front. The last param can be used to bring more elements forward if needed placed after the first element even at the front.

There is a way to bring element to the back, have not experimented with it.
  std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());


*** be careful of no testcases question and setting T = 1; You also need to remove the cin >> T before that.

GCD
great common divisor
when two have no factors that are same base for example one has 2 to the power of x and the other only has 3 to the power of x, GCD = 1.

Combination nCr
when nC2, choose 2, n*(n-1)/2 equivalent to nP2 = n*(n-1)

bitwise
& has lower precendence than != -> use brackets
& will make two numbers to the highest of two (if both are the same) best case, or becomes the lower one if higher is a supermask of the lower one, all the ones matches the other number, and higher has more one bits at other places if not the same number.
& a set of numbers will make everyone to the lowest if lowest is a submask of all.

xor -> two same will result in zero
xor with zero -> result in original
y ^ k  = XR -> XR ^ k = y -> y ^ XR = k

prefix xor
get the precalculated xor for each i
For eg to check 3 partition of xor for equality:
i represents first element of second partition, j represents first element of 3rd partition
if(prefix[i-1]==(prefix[j-1]^prefix[i-1]) && prefix[i-1] == (prefix[n-1]^prefix[j-1]))
