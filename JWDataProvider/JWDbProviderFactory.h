#pragma once

namespace JWDataProvider
{
	public ref class JWDbProviderFactory : public System::Data::Common::DbProviderFactory
	{
	public:
		JWDbProviderFactory();

/*
		property bool CanCreateBatch
		{
			bool get() override;
		}

		property bool CanCreateCommandBuilder
		{
			bool get() override;
		}

		property bool CanCreateDataAdapter
		{
			bool get() override;
		}
*/

		property bool CanCreateDataSourceEnumerator
		{
			bool get() override;
		}

		System::Data::Common::DbCommand^ CreateCommand() override;
		System::Data::Common::DbCommandBuilder^ CreateCommandBuilder() override;
		System::Data::Common::DbConnection^ CreateConnection() override;
		System::Data::Common::DbConnectionStringBuilder^ CreateConnectionStringBuilder() override;
		System::Data::Common::DbParameter^ CreateParameter() override;
	};
}