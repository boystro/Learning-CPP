#include <iostream>
#include <string>
#include <map>


class HRMLTag
{
public:
	std::string TagName;
	std::map<std::string, std::string> Attributes;
	HRMLTag* parent;
	HRMLTag* child;
	HRMLTag* next;

	HRMLTag() : parent(nullptr), child(nullptr), next(nullptr) {}
	HRMLTag(std::string tagName) : TagName(tagName), parent(nullptr), child(nullptr), next(nullptr) {}
};


int main()
{
	HRMLTag *root = new HRMLTag();

	int n, q;
	std::cin >> n;
	std::cin >> q;

	std::string inputLine;
	int counter;
	bool run = false;
	for (int i = 0; i < n; i++)
	{
		std::getline(std::cin, inputLine);
		counter = 0;
		run = true;
		while (run)
		{

		}
	}
}


getTag