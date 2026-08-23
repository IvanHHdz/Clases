### A Pluto.jl notebook ###
# v0.20.17

using Markdown
using InteractiveUtils

# ╔═╡ 8af84fac-6a8c-11f1-1b39-39729f2a8818
0.865 + 1.572 + 2.324 + 3.3339 - 8.1

# ╔═╡ 7746f5ab-9884-4c76-aefe-9acee1e766a0
1.061 + 1.923 + 2.839 + 4.07 - 8 - 2

# ╔═╡ 25ba05d7-8562-42ec-8ed7-55fb9eb6d703
64 + 35.2 + 22.33 + 16 - 8

# ╔═╡ e72e3f27-9b25-4a55-b596-db16d3e144f9
64 + 35.2 + 22.33 + 18 - 8 - 2

# ╔═╡ 8595521f-5f92-43a1-abc7-62109f6d4f11
120 + 220 + 330 + 470

# ╔═╡ 62c31575-0da7-4f19-852e-cdd8cecd0c01
8.1/1140

# ╔═╡ 58e46447-77a4-41db-ad83-60f60b7d7d96
1140 * 0.0071053

# ╔═╡ 3ded1807-29cf-44d1-abf3-ae7725fd5c60
470 * (7.1053 * 10^(-3))

# ╔═╡ 02a6cc8e-f42b-4a3e-81bd-edb0dd0346da
-8.1 + 0.8526 + 1.5631 + 2.34465 + 3.33935

# ╔═╡ a7a31baa-9bce-4001-b60f-f260c90e81bd
-8.1 + 0.8526 + 1.5631 + 2.3447 + 3.3394

# ╔═╡ ad0e079d-19cf-40d6-a91d-eb93914d35ed
10/1140

# ╔═╡ 21b79579-45e1-4cab-b8e7-12635a723ad4
470 * (8.7719 * 10^(-3))

# ╔═╡ 7e152390-5ef6-4b19-b8fa-1fb0bd99678c
-10 + 1.0526 + 1.9298 + 2.8947 + 4.1228

# ╔═╡ 249b10b8-ef97-4943-b4c6-822417eacbe3
err = (app, teo) ->
	abs(app - teo)/teo * 100

# ╔═╡ 1ce1f417-afe4-48c1-8f3d-b3508fa13c5f
err(1, 2)

# ╔═╡ 06c6a7b2-3aa9-4cb3-baa8-62aec7320442
v_teo = [1.0526, 1.9298, 2.8947, 4.1228]

# ╔═╡ bd537cc3-fba8-4255-96d2-7ac557934b98
v_app = [1.061, 1.923, 2.839, 4.07]

# ╔═╡ f009d9c2-98d6-42f7-a47a-44582819e31b
values = zip(v_app, v_teo)

# ╔═╡ 4606afa6-394f-4fee-932c-a85a06833b2f
for (a, t) in values
	println(err(a, t))
end

# ╔═╡ 0f08daa9-512c-4da2-bf6f-2c0c6e7a9c3d
r = [120, 220, 330, 470]

# ╔═╡ b4f15694-9dd8-4096-b379-6365364f7c76
for i in r
	print("$(8/i) + ")
end

# ╔═╡ 77d4e773-e8d8-4c50-985e-ec4edc797fc7
0.06667 + 0.036364 + 0.02424 + 0.01702

# ╔═╡ 4c5090da-d9f2-46cd-9a93-fa6256aed46b
10/470

# ╔═╡ faf00a97-6e9d-4967-bd98-3276a8d0f65b
0.06667 + 0.03636 + 0.02424 + 0.02128

# ╔═╡ 0f1ae00e-824a-49f3-81ec-afa0aff08603
64 + 35.2 + 22.33 + 18 

# ╔═╡ 945d9f1f-c409-4ba6-b2cc-4cae470d1118
64 + 35.2 + 22.33 + 16

# ╔═╡ 6bdd1d49-52d0-44ff-9851-b94a86ee3bba
a_teo = [66.67, 36.36, 24.24, 21.28, 148.55]

# ╔═╡ af408704-8ea5-4266-8f71-c0883377927a
a_app = [64, 35.2, 22.33, 18, 139.53]

# ╔═╡ 0fccdd82-45fe-452b-b7a7-5ac492fc60e3
values2 = zip(a_app, a_teo)

# ╔═╡ 8956fffa-0636-46fb-b221-f9c875a41562
for (a, t) in values2
	println(err(a, t))
end

# ╔═╡ 76cbe3b0-1462-49b1-9fd2-c8c70b8729b1
64 + 35.2 + 22.33 + 18

# ╔═╡ 00000000-0000-0000-0000-000000000001
PLUTO_PROJECT_TOML_CONTENTS = """
[deps]
"""

# ╔═╡ 00000000-0000-0000-0000-000000000002
PLUTO_MANIFEST_TOML_CONTENTS = """
# This file is machine-generated - editing it directly is not advised

julia_version = "1.11.6"
manifest_format = "2.0"
project_hash = "da39a3ee5e6b4b0d3255bfef95601890afd80709"

[deps]
"""

# ╔═╡ Cell order:
# ╠═8af84fac-6a8c-11f1-1b39-39729f2a8818
# ╠═7746f5ab-9884-4c76-aefe-9acee1e766a0
# ╠═25ba05d7-8562-42ec-8ed7-55fb9eb6d703
# ╠═e72e3f27-9b25-4a55-b596-db16d3e144f9
# ╠═8595521f-5f92-43a1-abc7-62109f6d4f11
# ╠═62c31575-0da7-4f19-852e-cdd8cecd0c01
# ╠═58e46447-77a4-41db-ad83-60f60b7d7d96
# ╠═3ded1807-29cf-44d1-abf3-ae7725fd5c60
# ╠═02a6cc8e-f42b-4a3e-81bd-edb0dd0346da
# ╠═a7a31baa-9bce-4001-b60f-f260c90e81bd
# ╠═ad0e079d-19cf-40d6-a91d-eb93914d35ed
# ╠═21b79579-45e1-4cab-b8e7-12635a723ad4
# ╠═7e152390-5ef6-4b19-b8fa-1fb0bd99678c
# ╠═249b10b8-ef97-4943-b4c6-822417eacbe3
# ╠═1ce1f417-afe4-48c1-8f3d-b3508fa13c5f
# ╠═06c6a7b2-3aa9-4cb3-baa8-62aec7320442
# ╠═bd537cc3-fba8-4255-96d2-7ac557934b98
# ╠═f009d9c2-98d6-42f7-a47a-44582819e31b
# ╠═4606afa6-394f-4fee-932c-a85a06833b2f
# ╠═0f08daa9-512c-4da2-bf6f-2c0c6e7a9c3d
# ╠═b4f15694-9dd8-4096-b379-6365364f7c76
# ╠═77d4e773-e8d8-4c50-985e-ec4edc797fc7
# ╠═4c5090da-d9f2-46cd-9a93-fa6256aed46b
# ╠═faf00a97-6e9d-4967-bd98-3276a8d0f65b
# ╠═0f1ae00e-824a-49f3-81ec-afa0aff08603
# ╠═945d9f1f-c409-4ba6-b2cc-4cae470d1118
# ╠═6bdd1d49-52d0-44ff-9851-b94a86ee3bba
# ╠═af408704-8ea5-4266-8f71-c0883377927a
# ╠═0fccdd82-45fe-452b-b7a7-5ac492fc60e3
# ╠═8956fffa-0636-46fb-b221-f9c875a41562
# ╠═76cbe3b0-1462-49b1-9fd2-c8c70b8729b1
# ╟─00000000-0000-0000-0000-000000000001
# ╟─00000000-0000-0000-0000-000000000002
