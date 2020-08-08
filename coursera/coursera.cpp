#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
#include <string>

using namespace std;

template <typename Element_1, typename Element_2 > map <Element_1, Element_2> operator *(map <Element_1, Element_2>& a, map <Element_1, Element_2>& b);
template <typename Container> Container Sqr(Container& a);
template <typename Element> vector <Element> operator *(vector <Element>& a, vector <Element>& b);
template <typename Element_1, typename Element_2 > pair <Element_1, Element_2> operator *(pair <Element_1, Element_2>& a, pair <Element_1, Element_2>& b);


template <typename Element>
vector <Element> operator *(vector <Element>& a, vector <Element>& b) {
	for (auto& i : a) {
		i = i * i;
	}

	return a;
}

template <typename Element_1, typename Element_2 >
pair <Element_1, Element_2> operator *(pair <Element_1, Element_2>& a, pair <Element_1, Element_2>& b) {
	a.first = a.first * a.first;
	a.second = a.second *  a.second;
	return a;
}

template <typename Element_1, typename Element_2 >
map <Element_1, Element_2> operator *(map <Element_1, Element_2>& a, map <Element_1, Element_2>& b) {
	for (auto& i : a) {
		i.second = i.second * i.second;
	}
	return a;
}

template <typename Container>
Container Sqr(Container& a) {
	a = a * a;

	return a;
}