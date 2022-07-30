#include <iostream>
#include <cpr/cpr.h>

int main()
{

    cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/html"),
                               cpr::Header({{"Accept", "text/html"}}));
    std::cout << r.text << std::endl;


    std::cout << "Article title :"<< std::endl;
    for (int i = (r.text.find("<h1>")+4); i < r.text.find("</h1>"); ++i)
    {
        std::cout << r.text [i];

    }


}