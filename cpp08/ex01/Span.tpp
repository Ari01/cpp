#ifndef SPAN_TPP
#define SPAN_TPP

template <typename T>
void	Span::insert(T begin, T end)
{
	std::vector<int>::iterator	ite;

	while (begin != end)
	{
		addNumber(*begin);
		begin++;
	}
}

#endif
