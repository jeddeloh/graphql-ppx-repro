#!/usr/bin/env node

const fs = require("fs");
const { buildSchema, graphqlSync, introspectionQuery } = require("graphql");

const sdl = fs.readFileSync("./schema.graphql").toString();

const executionResult = graphqlSync(buildSchema(sdl), introspectionQuery);

fs.writeFileSync(
  "graphql_schema.json",
  JSON.stringify(executionResult, null, 2)
);
