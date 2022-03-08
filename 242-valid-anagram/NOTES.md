//Lenght of each string should be same
//count of each string should be same
firstle we will sort string string s then we will sort string s2
then we will compare both the character // time complexity in this will be o(nlogn)
the other approach will be
we will maake hash for both string h1 and h2
// Create a count array and initialize all values as 0
int count[NO_OF_CHARS] = { 0 };
int i;
// For each character in input strings, increment count
// in the corresponding count array
for (i = 0; string s[i] && string t[i]; i++) {
count[stri1[i]]++;
count[str2[i]]--;
}
// If both strings are of different length. Removing
// this condition will make the program fail for strings
// like "aaca" and "aca"
if (str1[i] || str2[i])
return false;
// See if there is any non-zero value in count array
for (i = 0; i < NO_OF_CHARS; i++)