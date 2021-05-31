* rotate

brings whatever in the middle of the element to the front

rotate(start, element, end of element you want to bring forward)

if you just want to bring some elements with certain conditions to the front, run two times with first time push back the elements with certain conditions to new array and second time the rest to the new array.

for eg

	int  p = find(v.begin(), v.end(), 2) - v.begin();
	rotate(v.begin(), v.begin()+p,v.begin()+p+1);

	finds element and moves to front. The last param can be used to bring more elements forward if needed placed after the first element even at the front.

There is a way to bring element to the back, have not experimented with it.
  std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());


* note

be careful of no testcases question and setting T = 1; You also need to remove the cin >> T before that.

be careful of cin >> temp, then breaking when answer is set. Has ocured many times

be careful of int overflow, use ll when cin >> if you are required to do arithmetic on input that are at least 10^4

read question carefully, it will bite you in the ass if you don't.

register 1hr before, as 5 mins is not enough.

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

* string 
string(10, 'y') -> yyyyyyyyyy
when flipping a string, run the loop till < s.length()/2

* common substring

get all substrings of first string using two for loops
use find to see if substring matches substring in second string

* equalize everything if you can only pass to the right
two cycles is enough, if < mean, pass to right

* cuberoot 
ll v = 	cbrtl(b);
to prevent precision error:
while(v*v*v < b) ++v;
while(v*v*v > b) --v;

* iota
range creator [0,1,2,3,4] 
std::iota(a.begin(), a.end(), 0);

* odd even trick
int p = i % 2
can be used to enter odd partition or the even partition like this -> a[p] 


* vector<ll>[2] a -> creates 2 empty array of vector<ll> -> use a[0].push_back() to add values into the vector of vectors;

* vector erasing

for (vector<Player>::iterator it=allPlayers.begin(); 
                              it!=allPlayers.end(); 
                              /*it++*/) <----------- I commented it.
{

   if(it->getpMoney()<=0) 
      it = allPlayers.erase(it);
  else 
      ++it;
 }

* save indices of sorted array 

stable_sort(idx.begin(), idx.end(), [&v](int i1, int i2) {return v[i1] > v[i2];});

https://stackoverflow.com/questions/1577475/c-sorting-and-keeping-track-of-indexes

AND & operator
32 & 31 -> 0 
when 2 to the power going down 1, it will result in 0 , same for and(ing) anything with 0
see individual bits, then one 0 bit is sufficient to make the entire column 0.

* to check if two pattern matches
(a[i] == b[i]) != (a[i + 1] == b[i + 1]) -> where a and b are strings

* string trick
"YES\n" instead of "YES" << '\n'
adding 0 to binary string -> "101010" + '0' -> to avoid access over or under the index

*prefix flipping of 01 binary
(a[i] == b[i]) != (a[i + 1] == b[i + 1]) && can flip trick (if segment mismatch) side by side implies that anything before is the same.
1504b

* upper bound vs lower bound
can be used in multiset, set, vector
lower gives you the direct match or else the next higher
upper does not give you direct, even if it matches in value and gives the next higher

*keep track of counters
counters[a]++ -> count number of occurences of a particular number
vector<int> counters[200] -> for loop this to get the ans by iterating through every count of numbers 0 - 199 (remainder of 200 = % 200 )


