module TaskId = {
  type t = int;
  let make = (id: int): t => id;
  let toInt = (id: t): int => id;
};

type status =
  | Incomplete
  | Complete;

type task = {
  id: option(TaskId.t),
  description: string,
  status,
};

let createTask =
    (~task={id: None, description: "", status: Incomplete}, description) => {
  ChunkyData.Changeset.(
    task->cast(
      {
        description;
      },
    )
  );
};
