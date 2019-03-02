type action =
  | Insert
  | Update
  | Delete
  | Replace
  | Ignore;

type t = {
  isValid: bool,
  changes: list(string),
  errors: list(string),
  required: list(string),
  action: option(action),
};

let cast = (schema: 'a, params: 'b) => {
  isValid: true,
  changes: [],
  errors: [],
  required: [],
  action: None,
};
