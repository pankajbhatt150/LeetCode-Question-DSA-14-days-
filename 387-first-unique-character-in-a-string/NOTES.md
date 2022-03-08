//Brute force solution for this question
Simply we will do iteration two loop first loop will run from i=0; to string length and then we will will check condition wheather element we found is duplicate or not and then the 2 nd loop will run for string length:
for(i=0;i<s.length();i++)
{
bool found = true;
for(j=0;j<s.length();j++)
{
if(i!=j && s.char at[i] == s.char at[j])
found == false;
break;
}
if(found == true)
{
return i;
else
return -1;
}
​
​
​
​