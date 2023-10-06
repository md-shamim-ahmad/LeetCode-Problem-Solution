class Solution {
    public int getImportance(List<Employee> employees, int id) {
        HashMap<Integer, Employee> map = new HashMap<>();
        for (Employee emp : employees) map.put(emp.id, emp);
        if (!map.containsKey(id)) return 0;
        Queue<Employee> q = new LinkedList<>();
        q.add(map.get(id));
        int res = 0;
        while (!q.isEmpty()) {
            Employee emp = q.poll();
            res += emp.importance;
            for (Integer empId : emp.subordinates) q.add(map.get(empId));
        }
        return res;
    }
}
