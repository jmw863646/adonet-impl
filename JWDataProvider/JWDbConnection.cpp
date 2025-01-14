
#include "JWDbConnection.h"

using namespace System;
using namespace System::Data;


JWDataProvider::JWDbConnection::JWDbConnection() :
	DbConnection()
{
}

/*
bool JWDataProvider::JWDbConnection::CanCreateBatch::get()
{
	return false;
}
*/

String^ JWDataProvider::JWDbConnection::ConnectionString::get()
{
	return gcnew String("");
}

void JWDataProvider::JWDbConnection::ConnectionString::set(String^ connectionString)
{

}
