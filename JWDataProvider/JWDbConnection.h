#pragma once

namespace JWDataProvider
{
	public ref class JWDbConnection: public System::Data::Common::DbConnection
	{
	public:
		JWDbConnection();

/*
		property Boolean CanCreateBatch 
		{
			Boolean get() override;
		}
*/
		property System::String^ ConnectionString
		{
			System::String^ get() override;
			void set(System::String^ value) override;
		}

		property int ConnectionTimeout
		{
			int get() override;
			void set(int value) override;
		}

		property System::String^ Database
		{
			System::String^ get() override;
		}

		property System::String^ DataSource
		{
			System::String^ get() override;
		}

		property System::String^ ServerVersion
		{
			System::String^ get() override;
		}

		property System::Data::ConnectionState State
		{
			System::Data::ConnectionState get() override;
		}
	};
}
