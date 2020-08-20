// [%graphql
//   {|
//     mutation UploadTestResults($objects: test_results_insert_input!) {
//       insert_test_results(objects: $objects) {
//         affected_rows
//       }
//     }
//   |};
//   {inline: true}
// ];

// [%graphql
//   {|
//     mutation UploadTestResults($isAbnormal: Boolean!, $resultDate: timestamptz!, $testId: uuid!) {
//       insert_test_results_one(object: {is_abnormal: $isAbnormal, test_id: $testId, result_date: $resultDate}) {
//         id
//       }
//     }
//   |};
//   {inline: true}
// ];

[%graphql
  {|
    mutation Test($input: problem_input!) {
      failingMutation(input: $input)
    }
  |};
  {inline: true}
];
