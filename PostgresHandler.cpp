#include "PostgresHandler.h"

PostgresHandler::PostgresHandler()
{
	m_client = drogon::orm::DbClient::newPgClient("host=localhost port=5433 dbname=test user=Stanislav password=pass client_encoding=UTF8", 8);

	drogon::orm::Result result = m_client->execSqlSync("SELECT * FROM users");

	auto columns = result.columns();

	for (drogon::orm::Result::SizeType i = 0; i < result.size(); ++i) {
		auto row = result[i];


		for (drogon::orm::Result::SizeType col = 0; col < columns; ++col) {
			try {
				std::cout << result.columnName(col) << " " << row.at(result.columnName(col)).c_str() << std::endl;

			} catch (std::exception& e) {
				std::cout << e.what() << std::endl;
			}
		}

		std::cout << std::endl;
	}
}
