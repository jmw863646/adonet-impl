#include "JWDbProviderFactory.h"
#include "JWDbCommand.h"
#include "JWDbConnection.h"

using namespace System;
using namespace System::Data::Common;

JWDataProvider::JWDbProviderFactory::JWDbProviderFactory() :
	DbProviderFactory()
{
}

/*
bool JWDataProvider::JWDbProviderFactory::CanCreateBatch::get()
{
	return false;
}

bool JWDataProvider::JWDbProviderFactory::CanCreateCommandBuilder::get()
{
	return false;
}

bool JWDataProvider::JWDbProviderFactory::CanCreateDataAdapter::get()
{
	return false;
}
*/

bool JWDataProvider::JWDbProviderFactory::CanCreateDataSourceEnumerator::get()
{
	return false;
}

DbCommand^ JWDataProvider::JWDbProviderFactory::CreateCommand()
{
	return gcnew JWDbCommand();
}

DbCommandBuilder^ JWDataProvider::JWDbProviderFactory::CreateCommandBuilder()
{
	throw gcnew NotImplementedException("Do we need this?");
}

DbConnection^ JWDataProvider::JWDbProviderFactory::CreateConnection()
{
	return gcnew JWDbConnection();
}

DbConnectionStringBuilder^ JWDataProvider::CreateConnectionStringBuilder()
{
	throw gcnew NotImplementedException("Do we need this?");
}

DbParameter^ JWDataProvider::JWDbProviderFactory::CreateParameter()
{
	throw gcnew NotImplementedException("Do we need this?");
}

