#include <iostream>
#include <stdint.h>

typedef struct s_data {

	int		num;

}			Data;

uintptr_t serialize(Data *ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data *deserialize (uintptr_t raw) { return reinterpret_cast<Data *>(raw); }

int main() {

	Data *d = new Data;
	d->num = 7;

	uintptr_t uintTmp = serialize(d);
	Data *dTmp = deserialize(uintTmp);

	std::cout << "Original Data adress: " << d << std::endl;
	std::cout << "Adress after casts: " << dTmp << std::endl;
	std::cout << "Data inside original struct: " << d->num << std::endl;
	std::cout << "Data through new ptr: " << dTmp->num << std::endl;

	return 0;
}