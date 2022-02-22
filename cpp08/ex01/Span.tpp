#ifndef SPAN_TPP
#define SPAN_TPP

#include <algorithm>

template <typename T>
void	Span::insert(T begin, T end)
{
	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
	std::sort(span.begin(), span.end());
}

#endif
