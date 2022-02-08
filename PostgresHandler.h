#ifndef POSTGRESHANDLER_H
#define POSTGRESHANDLER_H

#include <drogon/HttpSimpleController.h>
#include <drogon/orm/DbClient.h>


class PostgresHandler
{
public:
	PostgresHandler();

private:
	std::shared_ptr<drogon::orm::DbClient> m_client = nullptr;
};


#endif // POSTGRESHANDLER_H
