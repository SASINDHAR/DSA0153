#include &lt;iostream&gt;
void getAge(int &amp;age) {
std::cout &lt;&lt; &quot;Enter your age: &quot;;
std::cin &gt;&gt; age;
}
void checkEligibility(int age) {
int votingAge = 18;
if (age &gt;= votingAge) {
std::cout &lt;&lt; &quot;You are eligible to vote.&quot; &lt;&lt; std::endl;
} else {
int yearsLeft = votingAge - age;
std::cout &lt;&lt; &quot;You are not eligible to vote. Years left to be eligible: &quot; &lt;&lt; yearsLeft &lt;&lt; &quot;
year(s).&quot; &lt;&lt; std::endl;
}
}
int main() {
int personAge;
getAge(personAge);
checkEligibility(personAge);
return 0;
}
