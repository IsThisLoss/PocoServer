#include "HandlerFactory.h"

#include "IndexHandler.h"

#include <Poco/Net/HTTPServerRequest.h>

using namespace Poco::Net;

HTTPRequestHandler* HandlerFactory::createRequestHandler(const HTTPServerRequest& request) {
    if (request.getURI() == "/")
        return new IndexHandler();
    else
        return nullptr;
}
