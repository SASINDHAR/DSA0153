#include &lt;iostream&gt;
#include &lt;string&gt;
bool isValidUsername(const std::string&amp; username1, const std::string&amp; username2) {
return username1 == username2;
}
int main() {
std::string userName, reenteredName;
std::cout &lt;&lt; &quot;Enter the user name: &quot;;
std::cin &gt;&gt; userName;
std::cout &lt;&lt; &quot;Reenter the user name: &quot;;
std::cin &gt;&gt; reenteredName;
if (isValidUsername(userName, reenteredName)) {
std::cout &lt;&lt; &quot;User name is Valid&quot; &lt;&lt; std::endl;
} else {
std::cout &lt;&lt; &quot;User name is Invalid&quot; &lt;&lt; std::endl;

}
return 0;
}
