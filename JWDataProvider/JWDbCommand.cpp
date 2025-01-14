
#include "JWDbCommand.h"
#include "JWDbConnection.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::Common;

JWDataProvider::JWDbCommand::JWDbCommand() :
	DbCommand()
{
}

bool JWDataProvider::JWDbCommand::CanRaiseEvents::get()
{
	return false;
}

String^ JWDataProvider::JWDbCommand::CommandText::get()
{
	return gcnew String("");
}

void JWDataProvider::JWDbCommand::CommandText::set(String^ value)
{
}

int JWDataProvider::JWDbCommand::CommandTimeout::get()
{
	return 10;
}

void JWDataProvider::JWDbCommand::CommandTimeout::set(int value)
{
}

CommandType JWDataProvider::JWDbCommand::CommandType::get()
{
	return System::Data::CommandType::Text;
}

void JWDataProvider::JWDbCommand::CommandType::set(System::Data::CommandType value)
{
}

DbConnection^ JWDataProvider::JWDbCommand::Connection::get()
{
	return new JWDbConnection();
}

void JWDataProvider::JWDbCommand::CommandType::set(System::Data::CommandType value)
{
}

DbParameterCollection^ JWDataProvider::JWDbCommand::DbParameterCollection::get()
{
	return new JWDbParameterCollection();
}

DbTransaction^ JWDataProvider::JWDbCommand::DbTransaction::get()
{
	return nullptr;
}

void JWDataProvider::JWDbCommand::DbTransaction::set(System::Data::Common::DbTransaction^ value)
{
}

Boolean JWDataProvider::JWDbCommand::DesignTimeVisible::get()
{
	return false;
}

DbParameterCollection^ JWDataProvider::JWDbCommand::Parameters::get()
{
	return new JWDbParameterCollection();
}

DbTransaction^ JWDataProvider::JWDbCommand::Transaction::get()
{
	return nullptr;
}

void JWDataProvider::JWDbCommand::Transaction::set(System::Data::Common::DbTransaction^ value)
{
}

UpdateRowSource JWDataProvider::JWDbCommand::UpdateRowSource::get()
{
	return System::Data::UpdateRowSource::None;
}

void JWDataProvider::JWDbCommand::UpdateRowSource::set(System::Data::UpdateRowSource value)
{
}

void JWDataProvider::JWDbCommand::Cancel()
{
	// Ignore for the moment
}

DbParameter^ JWDataProvider::JWDbCommand::CreateDbParameter()
{
	return gcnew JWDbParameter();
}
















void JWDataProvider::JWDbConnection::ConnectionString::set(String^ connectionString)
{

}
