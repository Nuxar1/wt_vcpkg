// wt_vcpkg.cpp : Defines the entry point for the application.
//

#include <Wt/WApplication.h>
#include <Wt/Dbo/backend/Postgres.h>

using namespace std;

int main()
{
	auto connection = std::make_unique<Wt::Dbo::backend::Postgres>("SQL_CONNECTION_STRING");
	
	printf("connection: %p\n", connection.get());
}
