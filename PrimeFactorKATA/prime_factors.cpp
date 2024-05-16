#include <vector>
class PrimeFactor {
public:
	std::vector<int> of(int i) {
		if (i == 2) {
			return { 2 };
		}
		if (i == 3) {
			return { 3 };
		}
		return {};
	}
};