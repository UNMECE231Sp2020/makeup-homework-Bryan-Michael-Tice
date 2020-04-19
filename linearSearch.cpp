#include <vector>

bool linearSearch(const std::vector<int>& set, int value)
{    
	for(auto i=set.begin();i!=set.end();i++) {
	
		if(value==*i) {
			return true;
		}
	}
	return false;
}

bool linearSearch(const int *begin, const int *end, int value)
{
	for(auto i=begin;i!=end;i++){
		if(value==*i) {
			
			return true;
		}
	}
	return false;	
}


