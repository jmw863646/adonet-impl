#pragma once

namespace JWDataProvider
{
	public ref class JWDbCommand: public System::Data::Common::DbCommand
	{
	public:
		JWDbCommand();

		property Boolean CanRaiseEvents
		{
			Boolean get() override;
		}

		property System::String^ CommandText
		{
			System::String^ get() override;
			void set(System::String^ value) override;
		}

		property int CommandTimeout
		{
			int get() override;
			void set(int value) override;
		}

		property System::Data::CommandType CommandType
		{
			System::Data::CommandType get() override;
			void set(System::Data::CommandType value) override;
		}

		property System::Data::Common::DbConnection^ Connection
		{
			System::Data::Common::DbConnection^ get() override;
			void set(System::Data::Common::DbConnection^ value) override;
		}

		property System::Data::Common::DbParameterCollection^ DbParameterCollection
		{
			System::Data::Common::DbParameterCollection^ get() override;
		}

		property System::Data::Common::DbTransaction^ DbTransaction
		{
			System::Data::Common::DbTransaction^ get() override;
			void set(System::Data::Common::DbTransaction^ value) override;
		}

		property System::Boolean DesignTimeVisible
		{
			System::Boolean get() override;
		}

		property System::Data::Common::DbParameterCollection^ Parameters
		{
			System::Data::Common::DbParameterCollection^ get() override;
		}

		property System::Data::Common::DbTransaction^ Transaction
		{
			System::Data::Common::DbTransaction^ get() override;
			void set(System::Data::Common::DbTransaction^ value) override;
		}

		property System::Data::UpdateRowSource UpdateRowSource
		{
			System::Data::UpdateRowSource get() override;
			void set(System::Data::UpdateRowSource value) override;
		}

		void Cancel() override;
		System::Data::Common::DbParameter^ CreateDbParameter() override;
		System::Data::Common::DbParameter^ CreateParameter() override;
		int ExecuteNonQuery() override;
		System::Data::Common::DbDataReader ExecuteReader() override;
		System::Data::Common::DbDataReader ExecuteReader(System::Data::CommandBehavior behavior) override;
		System::Object^ ExecuteScalar() override;
		void Prepare() override;




	protected:
		System::Data::Common::DbDataReader^ ExecuteDbDataReader(System::Data::CommandBehavior behavior) override;





	};
}
